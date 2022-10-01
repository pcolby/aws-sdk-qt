// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONTYPERESPONSE_H
#define QTAWS_GETQUALIFICATIONTYPERESPONSE_H

#include "mturkresponse.h"
#include "getqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class GetQualificationTypeResponsePrivate;

class QTAWSMTURK_EXPORT GetQualificationTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    GetQualificationTypeResponse(const GetQualificationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQualificationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQualificationTypeResponse)
    Q_DISABLE_COPY(GetQualificationTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
