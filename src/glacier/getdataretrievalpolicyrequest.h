// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATARETRIEVALPOLICYREQUEST_H
#define QTAWS_GETDATARETRIEVALPOLICYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class GetDataRetrievalPolicyRequestPrivate;

class QTAWSGLACIER_EXPORT GetDataRetrievalPolicyRequest : public GlacierRequest {

public:
    GetDataRetrievalPolicyRequest(const GetDataRetrievalPolicyRequest &other);
    GetDataRetrievalPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataRetrievalPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
