// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVMIMAGEREQUEST_P_H
#define QTAWS_IMPORTVMIMAGEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "importvmimagerequest.h"

namespace QtAws {
namespace ImageBuilder {

class ImportVmImageRequest;

class ImportVmImageRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ImportVmImageRequestPrivate(const ImageBuilderRequest::Action action,
                                   ImportVmImageRequest * const q);
    ImportVmImageRequestPrivate(const ImportVmImageRequestPrivate &other,
                                   ImportVmImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportVmImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
