// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTVERSIONREQUEST_P_H
#define QTAWS_DELETEPROJECTVERSIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "deleteprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectVersionRequest;

class DeleteProjectVersionRequestPrivate : public RekognitionRequestPrivate {

public:
    DeleteProjectVersionRequestPrivate(const RekognitionRequest::Action action,
                                   DeleteProjectVersionRequest * const q);
    DeleteProjectVersionRequestPrivate(const DeleteProjectVersionRequestPrivate &other,
                                   DeleteProjectVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
