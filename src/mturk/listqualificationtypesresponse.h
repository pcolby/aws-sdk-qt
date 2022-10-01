// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONTYPESRESPONSE_H
#define QTAWS_LISTQUALIFICATIONTYPESRESPONSE_H

#include "mturkresponse.h"
#include "listqualificationtypesrequest.h"

namespace QtAws {
namespace MTurk {

class ListQualificationTypesResponsePrivate;

class QTAWSMTURK_EXPORT ListQualificationTypesResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListQualificationTypesResponse(const ListQualificationTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQualificationTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQualificationTypesResponse)
    Q_DISABLE_COPY(ListQualificationTypesResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
