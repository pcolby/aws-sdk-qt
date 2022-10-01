// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPROJECTVERSIONREQUEST_P_H
#define QTAWS_COPYPROJECTVERSIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "copyprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class CopyProjectVersionRequest;

class CopyProjectVersionRequestPrivate : public RekognitionRequestPrivate {

public:
    CopyProjectVersionRequestPrivate(const RekognitionRequest::Action action,
                                   CopyProjectVersionRequest * const q);
    CopyProjectVersionRequestPrivate(const CopyProjectVersionRequestPrivate &other,
                                   CopyProjectVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
