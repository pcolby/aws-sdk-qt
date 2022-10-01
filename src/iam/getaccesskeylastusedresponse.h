// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYLASTUSEDRESPONSE_H
#define QTAWS_GETACCESSKEYLASTUSEDRESPONSE_H

#include "iamresponse.h"
#include "getaccesskeylastusedrequest.h"

namespace QtAws {
namespace Iam {

class GetAccessKeyLastUsedResponsePrivate;

class QTAWSIAM_EXPORT GetAccessKeyLastUsedResponse : public IamResponse {
    Q_OBJECT

public:
    GetAccessKeyLastUsedResponse(const GetAccessKeyLastUsedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessKeyLastUsedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessKeyLastUsedResponse)
    Q_DISABLE_COPY(GetAccessKeyLastUsedResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
