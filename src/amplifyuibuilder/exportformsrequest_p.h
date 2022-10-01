// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTFORMSREQUEST_P_H
#define QTAWS_EXPORTFORMSREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "exportformsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportFormsRequest;

class ExportFormsRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ExportFormsRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ExportFormsRequest * const q);
    ExportFormsRequestPrivate(const ExportFormsRequestPrivate &other,
                                   ExportFormsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportFormsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
