// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOSESSIONMAPPINGREQUEST_H
#define QTAWS_UPDATESTUDIOSESSIONMAPPINGREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class UpdateStudioSessionMappingRequestPrivate;

class QTAWSEMR_EXPORT UpdateStudioSessionMappingRequest : public EmrRequest {

public:
    UpdateStudioSessionMappingRequest(const UpdateStudioSessionMappingRequest &other);
    UpdateStudioSessionMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
