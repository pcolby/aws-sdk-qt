// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNVOLUMEREQUEST_H
#define QTAWS_UNASSIGNVOLUMEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UnassignVolumeRequestPrivate;

class QTAWSOPSWORKS_EXPORT UnassignVolumeRequest : public OpsWorksRequest {

public:
    UnassignVolumeRequest(const UnassignVolumeRequest &other);
    UnassignVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
