// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGIMAGEREQUEST_H
#define QTAWS_UPDATESTREAMINGIMAGEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStreamingImageRequestPrivate;

class QTAWSNIMBLE_EXPORT UpdateStreamingImageRequest : public NimbleRequest {

public:
    UpdateStreamingImageRequest(const UpdateStreamingImageRequest &other);
    UpdateStreamingImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
