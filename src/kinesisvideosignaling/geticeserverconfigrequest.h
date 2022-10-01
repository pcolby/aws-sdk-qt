// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETICESERVERCONFIGREQUEST_H
#define QTAWS_GETICESERVERCONFIGREQUEST_H

#include "kinesisvideosignalingrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class GetIceServerConfigRequestPrivate;

class QTAWSKINESISVIDEOSIGNALING_EXPORT GetIceServerConfigRequest : public KinesisVideoSignalingRequest {

public:
    GetIceServerConfigRequest(const GetIceServerConfigRequest &other);
    GetIceServerConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIceServerConfigRequest)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
