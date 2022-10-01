// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWTYPESRESPONSE_H
#define QTAWS_LISTWORKFLOWTYPESRESPONSE_H

#include "swfresponse.h"
#include "listworkflowtypesrequest.h"

namespace QtAws {
namespace Swf {

class ListWorkflowTypesResponsePrivate;

class QTAWSSWF_EXPORT ListWorkflowTypesResponse : public SwfResponse {
    Q_OBJECT

public:
    ListWorkflowTypesResponse(const ListWorkflowTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkflowTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkflowTypesResponse)
    Q_DISABLE_COPY(ListWorkflowTypesResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
