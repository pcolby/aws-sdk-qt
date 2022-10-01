// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDINGCONFIGURATIONREQUEST_H
#define QTAWS_GETRECORDINGCONFIGURATIONREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class GetRecordingConfigurationRequestPrivate;

class QTAWSIVS_EXPORT GetRecordingConfigurationRequest : public IvsRequest {

public:
    GetRecordingConfigurationRequest(const GetRecordingConfigurationRequest &other);
    GetRecordingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecordingConfigurationRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
