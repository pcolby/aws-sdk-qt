// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTIMAGERESPONSE_H
#define QTAWS_IMPORTIMAGERESPONSE_H

#include "ec2response.h"
#include "importimagerequest.h"

namespace QtAws {
namespace Ec2 {

class ImportImageResponsePrivate;

class QTAWSEC2_EXPORT ImportImageResponse : public Ec2Response {
    Q_OBJECT

public:
    ImportImageResponse(const ImportImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportImageResponse)
    Q_DISABLE_COPY(ImportImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
