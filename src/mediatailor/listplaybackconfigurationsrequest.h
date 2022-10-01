// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKCONFIGURATIONSREQUEST_H
#define QTAWS_LISTPLAYBACKCONFIGURATIONSREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListPlaybackConfigurationsRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT ListPlaybackConfigurationsRequest : public MediaTailorRequest {

public:
    ListPlaybackConfigurationsRequest(const ListPlaybackConfigurationsRequest &other);
    ListPlaybackConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlaybackConfigurationsRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
