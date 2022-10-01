// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELSRESPONSE_H
#define QTAWS_DELETELABELSRESPONSE_H

#include "workdocsresponse.h"
#include "deletelabelsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteLabelsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeleteLabelsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeleteLabelsResponse(const DeleteLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLabelsResponse)
    Q_DISABLE_COPY(DeleteLabelsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
