// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTPOLICYREQUEST_H
#define QTAWS_GETCOMPONENTPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetComponentPolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetComponentPolicyRequest : public ImageBuilderRequest {

public:
    GetComponentPolicyRequest(const GetComponentPolicyRequest &other);
    GetComponentPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentPolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
