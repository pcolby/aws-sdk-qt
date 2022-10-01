// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETERECORDINGCONFIGURATIONREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteRecordingConfigurationRequestPrivate;

class QTAWSIVS_EXPORT DeleteRecordingConfigurationRequest : public IvsRequest {

public:
    DeleteRecordingConfigurationRequest(const DeleteRecordingConfigurationRequest &other);
    DeleteRecordingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecordingConfigurationRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
