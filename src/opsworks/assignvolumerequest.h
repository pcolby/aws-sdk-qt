// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNVOLUMEREQUEST_H
#define QTAWS_ASSIGNVOLUMEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class AssignVolumeRequestPrivate;

class QTAWSOPSWORKS_EXPORT AssignVolumeRequest : public OpsWorksRequest {

public:
    AssignVolumeRequest(const AssignVolumeRequest &other);
    AssignVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
