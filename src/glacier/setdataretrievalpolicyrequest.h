// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDATARETRIEVALPOLICYREQUEST_H
#define QTAWS_SETDATARETRIEVALPOLICYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class SetDataRetrievalPolicyRequestPrivate;

class QTAWSGLACIER_EXPORT SetDataRetrievalPolicyRequest : public GlacierRequest {

public:
    SetDataRetrievalPolicyRequest(const SetDataRetrievalPolicyRequest &other);
    SetDataRetrievalPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDataRetrievalPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
