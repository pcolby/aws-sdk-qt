// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDINGCONFIGURATIONSREQUEST_H
#define QTAWS_LISTRECORDINGCONFIGURATIONSREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class ListRecordingConfigurationsRequestPrivate;

class QTAWSIVS_EXPORT ListRecordingConfigurationsRequest : public IvsRequest {

public:
    ListRecordingConfigurationsRequest(const ListRecordingConfigurationsRequest &other);
    ListRecordingConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecordingConfigurationsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
