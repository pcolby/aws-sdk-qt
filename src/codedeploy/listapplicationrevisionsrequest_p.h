// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONREVISIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONREVISIONSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listapplicationrevisionsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListApplicationRevisionsRequest;

class ListApplicationRevisionsRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListApplicationRevisionsRequestPrivate(const CodeDeployRequest::Action action,
                                   ListApplicationRevisionsRequest * const q);
    ListApplicationRevisionsRequestPrivate(const ListApplicationRevisionsRequestPrivate &other,
                                   ListApplicationRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationRevisionsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
