// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELSRESPONSE_H
#define QTAWS_CREATELABELSRESPONSE_H

#include "workdocsresponse.h"
#include "createlabelsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateLabelsResponsePrivate;

class QTAWSWORKDOCS_EXPORT CreateLabelsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    CreateLabelsResponse(const CreateLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelsResponse)
    Q_DISABLE_COPY(CreateLabelsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
