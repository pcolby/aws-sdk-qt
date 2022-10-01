// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSREQUEST_H
#define QTAWS_LISTEXTENSIONSREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionsRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListExtensionsRequest : public GameSparksRequest {

public:
    ListExtensionsRequest(const ListExtensionsRequest &other);
    ListExtensionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
