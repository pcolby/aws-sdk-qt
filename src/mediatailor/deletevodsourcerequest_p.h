// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVODSOURCEREQUEST_P_H
#define QTAWS_DELETEVODSOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deletevodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteVodSourceRequest;

class DeleteVodSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeleteVodSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   DeleteVodSourceRequest * const q);
    DeleteVodSourceRequestPrivate(const DeleteVodSourceRequestPrivate &other,
                                   DeleteVodSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
