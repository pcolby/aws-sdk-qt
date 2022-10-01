// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMAGECREATIONREQUEST_H
#define QTAWS_CANCELIMAGECREATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CancelImageCreationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CancelImageCreationRequest : public ImageBuilderRequest {

public:
    CancelImageCreationRequest(const CancelImageCreationRequest &other);
    CancelImageCreationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelImageCreationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
