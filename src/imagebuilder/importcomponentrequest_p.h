// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCOMPONENTREQUEST_P_H
#define QTAWS_IMPORTCOMPONENTREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "importcomponentrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ImportComponentRequest;

class ImportComponentRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ImportComponentRequestPrivate(const ImageBuilderRequest::Action action,
                                   ImportComponentRequest * const q);
    ImportComponentRequestPrivate(const ImportComponentRequestPrivate &other,
                                   ImportComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportComponentRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
