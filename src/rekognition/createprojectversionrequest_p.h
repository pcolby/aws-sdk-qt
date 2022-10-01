// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTVERSIONREQUEST_P_H
#define QTAWS_CREATEPROJECTVERSIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "createprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateProjectVersionRequest;

class CreateProjectVersionRequestPrivate : public RekognitionRequestPrivate {

public:
    CreateProjectVersionRequestPrivate(const RekognitionRequest::Action action,
                                   CreateProjectVersionRequest * const q);
    CreateProjectVersionRequestPrivate(const CreateProjectVersionRequestPrivate &other,
                                   CreateProjectVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
