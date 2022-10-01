// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTHEMESREQUEST_P_H
#define QTAWS_EXPORTTHEMESREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "exportthemesrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportThemesRequest;

class ExportThemesRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ExportThemesRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ExportThemesRequest * const q);
    ExportThemesRequestPrivate(const ExportThemesRequestPrivate &other,
                                   ExportThemesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportThemesRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
