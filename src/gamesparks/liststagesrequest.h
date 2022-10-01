// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGESREQUEST_H
#define QTAWS_LISTSTAGESREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListStagesRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListStagesRequest : public GameSparksRequest {

public:
    ListStagesRequest(const ListStagesRequest &other);
    ListStagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStagesRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
