// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOSESSIONMAPPINGREQUEST_H
#define QTAWS_CREATESTUDIOSESSIONMAPPINGREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class CreateStudioSessionMappingRequestPrivate;

class QTAWSEMR_EXPORT CreateStudioSessionMappingRequest : public EmrRequest {

public:
    CreateStudioSessionMappingRequest(const CreateStudioSessionMappingRequest &other);
    CreateStudioSessionMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
