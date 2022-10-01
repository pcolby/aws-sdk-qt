// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGEPOLICYREQUEST_H
#define QTAWS_PUTIMAGEPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutImagePolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT PutImagePolicyRequest : public ImageBuilderRequest {

public:
    PutImagePolicyRequest(const PutImagePolicyRequest &other);
    PutImagePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImagePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
