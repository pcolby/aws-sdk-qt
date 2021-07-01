/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IMAGEBUILDERREQUEST_P_H
#define QTAWS_IMAGEBUILDERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "imagebuilderrequest.h"

namespace QtAws {
namespace imagebuilder {

class imagebuilderRequest;

class imagebuilderRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    imagebuilderRequest::Action action; ///< imagebuilder action to be performed.
    QString apiVersion;        ///< imagebuilder API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< imagebuilder request (query string) parameters. @todo?

    imagebuilderRequestPrivate(const imagebuilderRequest::Action action, imagebuilderRequest * const q);
    imagebuilderRequestPrivate(const imagebuilderRequestPrivate &other, imagebuilderRequest * const q);

    static QString toString(const imagebuilderRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(imagebuilderRequest)

};

} // namespace imagebuilder
} // namespace QtAws

#endif
