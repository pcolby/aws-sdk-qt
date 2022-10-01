// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACERESPONSE_P_H
#define QTAWS_DELETENAMESPACERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteNamespaceResponse;

class DeleteNamespaceResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteNamespaceResponsePrivate(DeleteNamespaceResponse * const q);

    void parseDeleteNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNamespaceResponse)
    Q_DISABLE_COPY(DeleteNamespaceResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
