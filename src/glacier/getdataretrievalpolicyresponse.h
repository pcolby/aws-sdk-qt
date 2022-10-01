// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATARETRIEVALPOLICYRESPONSE_H
#define QTAWS_GETDATARETRIEVALPOLICYRESPONSE_H

#include "glacierresponse.h"
#include "getdataretrievalpolicyrequest.h"

namespace QtAws {
namespace Glacier {

class GetDataRetrievalPolicyResponsePrivate;

class QTAWSGLACIER_EXPORT GetDataRetrievalPolicyResponse : public GlacierResponse {
    Q_OBJECT

public:
    GetDataRetrievalPolicyResponse(const GetDataRetrievalPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataRetrievalPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataRetrievalPolicyResponse)
    Q_DISABLE_COPY(GetDataRetrievalPolicyResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
