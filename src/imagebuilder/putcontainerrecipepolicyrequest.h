// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERRECIPEPOLICYREQUEST_H
#define QTAWS_PUTCONTAINERRECIPEPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutContainerRecipePolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT PutContainerRecipePolicyRequest : public ImageBuilderRequest {

public:
    PutContainerRecipePolicyRequest(const PutContainerRecipePolicyRequest &other);
    PutContainerRecipePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContainerRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
