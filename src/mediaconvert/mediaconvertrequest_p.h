// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONVERTREQUEST_P_H
#define QTAWS_MEDIACONVERTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class MediaConvertRequest;

class MediaConvertRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaConvertRequest::Action action; ///< MediaConvert action to be performed.
    QString apiVersion;        ///< MediaConvert API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaConvert request (query string) parameters. @todo?

    MediaConvertRequestPrivate(const MediaConvertRequest::Action action, MediaConvertRequest * const q);
    MediaConvertRequestPrivate(const MediaConvertRequestPrivate &other, MediaConvertRequest * const q);

    static QString toString(const MediaConvertRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaConvertRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
