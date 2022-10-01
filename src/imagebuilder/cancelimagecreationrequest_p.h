// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMAGECREATIONREQUEST_P_H
#define QTAWS_CANCELIMAGECREATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "cancelimagecreationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CancelImageCreationRequest;

class CancelImageCreationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CancelImageCreationRequestPrivate(const ImageBuilderRequest::Action action,
                                   CancelImageCreationRequest * const q);
    CancelImageCreationRequestPrivate(const CancelImageCreationRequestPrivate &other,
                                   CancelImageCreationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelImageCreationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
