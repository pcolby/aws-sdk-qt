// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCOMPONENTRESPONSE_H
#define QTAWS_IMPORTCOMPONENTRESPONSE_H

#include "imagebuilderresponse.h"
#include "importcomponentrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ImportComponentResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ImportComponentResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ImportComponentResponse(const ImportComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportComponentResponse)
    Q_DISABLE_COPY(ImportComponentResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
