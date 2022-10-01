// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGIMAGEREQUEST_H
#define QTAWS_DELETESTREAMINGIMAGEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingImageRequestPrivate;

class QTAWSNIMBLE_EXPORT DeleteStreamingImageRequest : public NimbleRequest {

public:
    DeleteStreamingImageRequest(const DeleteStreamingImageRequest &other);
    DeleteStreamingImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
