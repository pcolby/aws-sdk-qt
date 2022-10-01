// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECORDINGCONFIGURATIONREQUEST_H
#define QTAWS_CREATERECORDINGCONFIGURATIONREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class CreateRecordingConfigurationRequestPrivate;

class QTAWSIVS_EXPORT CreateRecordingConfigurationRequest : public IvsRequest {

public:
    CreateRecordingConfigurationRequest(const CreateRecordingConfigurationRequest &other);
    CreateRecordingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecordingConfigurationRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
