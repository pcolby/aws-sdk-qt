// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCOMPONENTSREQUEST_P_H
#define QTAWS_EXPORTCOMPONENTSREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "exportcomponentsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportComponentsRequest;

class ExportComponentsRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ExportComponentsRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ExportComponentsRequest * const q);
    ExportComponentsRequestPrivate(const ExportComponentsRequestPrivate &other,
                                   ExportComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportComponentsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
