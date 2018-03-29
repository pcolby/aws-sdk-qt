/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IMPORTEXPORTCLIENTREQUEST_P_H
#define QTAWS_IMPORTEXPORTCLIENTREQUEST_P_H

#include "importexport_p.h"
#include "importexportclientrequest.h"

namespace QtAws {
namespace ImportExport {

class ImportExportClientRequest;

class QTAWS_EXPORT ImportExportClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ImportExportClientRequest::Action action; ///< ImportExport action to be performed.
    QString apiVersion;        ///< ImportExport API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ImportExport request (query string) parameters. @todo?

    ImportExportClientRequestPrivate(const ImportExportClientRequest::Action action, ImportExportClientRequest * const q);
    ImportExportClientRequestPrivate(const ImportExportClientRequestPrivate &other, ImportExportClientRequest * const q);

    static QString toString(const ImportExportClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ImportExportClientRequest)

};

} // namespace ImportExport
} // namespace QtAws

#endif
