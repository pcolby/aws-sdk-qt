// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPONENTPOLICYREQUEST_H
#define QTAWS_PUTCOMPONENTPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutComponentPolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT PutComponentPolicyRequest : public ImageBuilderRequest {

public:
    PutComponentPolicyRequest(const PutComponentPolicyRequest &other);
    PutComponentPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutComponentPolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
