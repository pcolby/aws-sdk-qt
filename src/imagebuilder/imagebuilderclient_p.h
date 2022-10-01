// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMAGEBUILDERCLIENT_P_H
#define QTAWS_IMAGEBUILDERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ImageBuilder {

class ImageBuilderClient;

class ImageBuilderClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ImageBuilderClientPrivate(ImageBuilderClient * const q);

private:
    Q_DECLARE_PUBLIC(ImageBuilderClient)
    Q_DISABLE_COPY(ImageBuilderClientPrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
