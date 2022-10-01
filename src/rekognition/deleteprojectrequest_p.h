// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTREQUEST_P_H
#define QTAWS_DELETEPROJECTREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectRequest;

class DeleteProjectRequestPrivate : public RekognitionRequestPrivate {

public:
    DeleteProjectRequestPrivate(const RekognitionRequest::Action action,
                                   DeleteProjectRequest * const q);
    DeleteProjectRequestPrivate(const DeleteProjectRequestPrivate &other,
                                   DeleteProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProjectRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
