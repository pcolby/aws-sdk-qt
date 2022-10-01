// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETADATAREQUEST_H
#define QTAWS_UPDATEFLEETMETADATAREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateFleetMetadataRequestPrivate;

class QTAWSWORKLINK_EXPORT UpdateFleetMetadataRequest : public WorkLinkRequest {

public:
    UpdateFleetMetadataRequest(const UpdateFleetMetadataRequest &other);
    UpdateFleetMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetMetadataRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
