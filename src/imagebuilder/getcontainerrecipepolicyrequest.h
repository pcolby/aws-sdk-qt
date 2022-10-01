// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPEPOLICYREQUEST_H
#define QTAWS_GETCONTAINERRECIPEPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipePolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetContainerRecipePolicyRequest : public ImageBuilderRequest {

public:
    GetContainerRecipePolicyRequest(const GetContainerRecipePolicyRequest &other);
    GetContainerRecipePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
