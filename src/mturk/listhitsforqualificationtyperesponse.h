// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSFORQUALIFICATIONTYPERESPONSE_H
#define QTAWS_LISTHITSFORQUALIFICATIONTYPERESPONSE_H

#include "mturkresponse.h"
#include "listhitsforqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class ListHITsForQualificationTypeResponsePrivate;

class QTAWSMTURK_EXPORT ListHITsForQualificationTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListHITsForQualificationTypeResponse(const ListHITsForQualificationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHITsForQualificationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHITsForQualificationTypeResponse)
    Q_DISABLE_COPY(ListHITsForQualificationTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
