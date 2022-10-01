// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKKEYPAIRSREQUEST_H
#define QTAWS_LISTPLAYBACKKEYPAIRSREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class ListPlaybackKeyPairsRequestPrivate;

class QTAWSIVS_EXPORT ListPlaybackKeyPairsRequest : public IvsRequest {

public:
    ListPlaybackKeyPairsRequest(const ListPlaybackKeyPairsRequest &other);
    ListPlaybackKeyPairsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlaybackKeyPairsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
