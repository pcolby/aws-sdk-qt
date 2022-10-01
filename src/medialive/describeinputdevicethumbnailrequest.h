// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICETHUMBNAILREQUEST_H
#define QTAWS_DESCRIBEINPUTDEVICETHUMBNAILREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceThumbnailRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputDeviceThumbnailRequest : public MediaLiveRequest {

public:
    DescribeInputDeviceThumbnailRequest(const DescribeInputDeviceThumbnailRequest &other);
    DescribeInputDeviceThumbnailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputDeviceThumbnailRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
