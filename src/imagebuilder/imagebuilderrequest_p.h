// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMAGEBUILDERREQUEST_P_H
#define QTAWS_IMAGEBUILDERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ImageBuilderRequest;

class ImageBuilderRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ImageBuilderRequest::Action action; ///< ImageBuilder action to be performed.
    QString apiVersion;        ///< ImageBuilder API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ImageBuilder request (query string) parameters. @todo?

    ImageBuilderRequestPrivate(const ImageBuilderRequest::Action action, ImageBuilderRequest * const q);
    ImageBuilderRequestPrivate(const ImageBuilderRequestPrivate &other, ImageBuilderRequest * const q);

    static QString toString(const ImageBuilderRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ImageBuilderRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
