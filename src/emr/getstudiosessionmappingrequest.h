// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOSESSIONMAPPINGREQUEST_H
#define QTAWS_GETSTUDIOSESSIONMAPPINGREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class GetStudioSessionMappingRequestPrivate;

class QTAWSEMR_EXPORT GetStudioSessionMappingRequest : public EmrRequest {

public:
    GetStudioSessionMappingRequest(const GetStudioSessionMappingRequest &other);
    GetStudioSessionMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
