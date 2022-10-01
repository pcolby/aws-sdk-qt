// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONREQUESTSRESPONSE_H
#define QTAWS_LISTQUALIFICATIONREQUESTSRESPONSE_H

#include "mturkresponse.h"
#include "listqualificationrequestsrequest.h"

namespace QtAws {
namespace MTurk {

class ListQualificationRequestsResponsePrivate;

class QTAWSMTURK_EXPORT ListQualificationRequestsResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListQualificationRequestsResponse(const ListQualificationRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQualificationRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQualificationRequestsResponse)
    Q_DISABLE_COPY(ListQualificationRequestsResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
