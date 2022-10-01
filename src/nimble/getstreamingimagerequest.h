// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGIMAGEREQUEST_H
#define QTAWS_GETSTREAMINGIMAGEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingImageRequestPrivate;

class QTAWSNIMBLE_EXPORT GetStreamingImageRequest : public NimbleRequest {

public:
    GetStreamingImageRequest(const GetStreamingImageRequest &other);
    GetStreamingImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
